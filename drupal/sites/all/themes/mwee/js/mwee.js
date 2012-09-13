(function($) {
  // console.log($('.form-radio[value=_none]'))
  //remove N/A's from all forms
  $('.form-radio[value=_none]').parent().hide();


  $.each($('.field-group-fieldset'), function(){
    console.log($(this))
  })
  
})(jQuery);