import data from '../maps.json' assert { type: 'json' };
  

    let mymap = L.map("mapid", {
      zoom: 15,
      center: L.latLng([38.246242, 21.7350847])
      //center: L.latLng([lat, long)
    }); //set center
  
    
    mymap.addLayer(
      L.tileLayer("https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png")
    ); //base layer
  
    ///////////////////////////////////Εντοπισμός Χρήστη///////////////////////////////////////////////
    mymap.locate({setView: true, zoom: 30}); //Εντοπισμός χρήστη
  
    function onLocationFound(e) {            //Δημιουργία Συνάρτησης για σχεδίαση περιοχής που μπορεί
      var radius = e.accuracy;               //να βρίσκεται ο χρήστης με βάση την ακρίβεια
  
      L.marker(e.latlng,{icon: redIcon}).addTo(mymap)
          .bindPopup("You are within " + radius + " meters from this point").openPopup();
  
      L.circle(e.latlng, radius).addTo(mymap);
    }
  
    mymap.on('locationfound', onLocationFound);
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
  
    var featuresLayer = L.geoJSON(data, {
      pointToLayer: function(feature, marker){
      if(typeof feature.properties.name!=='undefined'){
      //L.marker(feature.geometry.coordinates,{icon: goldIcon}).addTo(mymap);
        //console.log(feature.geometry.coordinates[0]+" "+ feature.geometry.coordinates[1]);
        return L.marker([feature.geometry.coordinates[1],feature.geometry.coordinates[0]],{icon: blueIcon}); 
      }
      else{
        return L.marker([feature.geometry.coordinates[1],feature.geometry.coordinates[0]],{icon: greyIcon});
      }
    },
    onEachFeature: function(feature, layer){
      layer.bindPopup(feature.properties.name);
    }
  }).addTo(mymap);
  
    ////////////populate map with GeoJSON feature layer
    //featuresLayer.addTo(mymap);
    featuresLayer.addTo(mymap);
    //TOC.addOverlay(featuresLayer, "My layer name in TOC");
    //mymap.removeLayer(featuresLayer);
  
    //Control Search Έυρεση Super Market με βάση το όνομα
    let controlSearch = new L.Control.Search({
      position: "topright",
      layer: featuresLayer,
      propertyName: "name",
      initial: false,
      zoom: 30,
      marker: false
    });
    
    mymap.addControl(controlSearch);
      //if(typeof feature.properties.name!=='undefined')
