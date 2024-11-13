$(document).ready(function(){
	$.ajax({
		
		url: "./data_2.php",
		method: "GET",
		success: function(data) {
			//console.log(data);
			var discount_date = [];
			var new_price = [];

			for(var i in data) {
				discount_date.push("Name: "+ data[i].PRODUCT_NAME);
				new_price.push(data[i].SUM);
			}
		
			//console.log(dateChartJS);
			var chartdata = {
				labels: discount_date,
				datasets : [
					{
						label: 'Discounts',
						backgroundColor: 'rgba(200, 50, 50, 0.75)',
						borderColor: 'rgba(50, 50, 50, 0.75)',
						hoverBackgroundColor: 'rgba(250, 0, 0, 1)',
						hoverBorderColor: 'rgba(0, 0, 0, 1)',
						data: new_price
					}
				]
			};


			  
			  
			var ctx = $("#mycanvas2");

			var barGraph = new Chart(ctx, {
				type: 'bar',
				data: chartdata,
			});
			
		},
		error: function(data) {
			console.log(data);
		}
	});
});



