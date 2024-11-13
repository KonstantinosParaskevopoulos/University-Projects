$('.message a').click(function(){   // Είναι η λειτουργία που εναλλάσει την φόρμα εγγραφής σε σύνδεσης και αντίστροφα με animation //
   $('form').animate({height: "toggle", opacity: "toggle"}, "slow");
});
