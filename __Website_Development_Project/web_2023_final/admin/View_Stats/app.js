$(document).ready(function(){
	$.ajax({
		url: "./data.php",	
		method: "GET",
		success: function(data) {
			//console.log(data);
			var discount_date = [];//Δημιουργία πινάκων που θα αποθηκευτούν τα δεδομένα που θα επιστραφούν από τη βάση
			var new_price = [];

			for(var i in data) {
				discount_date.push("Date: "+data[i].DISCOUNT_DATE+ " Name: "+ data[i].DISCOUNT_PRODUCT_NAME); //Γέμισμα πινάκων με δεδομένα
				new_price.push(data[i].NEW_PRICE);
			}
		
			//console.log(dateChartJS);
			var chartdata = {
				labels: discount_date,
				datasets : [
					{
						label: 'Discounts',
						backgroundColor: 'rgba(50, 50, 200, 0.75)',
						borderColor: 'rgba(50, 50, 50, 0.75)',
						hoverBackgroundColor: 'rgba(0, 0, 250, 1)',
						hoverBorderColor: 'rgba(0, 0, 0, 1)',
						data: new_price
					}
				]
			};


			  
			  
			var ctx = $("#mycanvas"); //Σε ποιο div θα τυπωθεί το γράφημα

			var barGraph = new Chart(ctx, {//Δημιουργία γραφήματος
				type: 'bar',
				data: chartdata,
			});
			
		},
		error: function(data) {	//Περίπτωση Σφάλματος
			console.log(data);
		}
	});
});



