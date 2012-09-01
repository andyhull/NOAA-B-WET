<header id="navbar" role="banner" class="navbar navbar-fixed-top">
  <div class="navbar-inner">
  	<div class="container">
  	  <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
  	  <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  	  </a>
  	  
  	  <?php if ($logo): ?>
    		<a class="brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
    		  <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    		</a>
  	  <?php endif; ?>

  	  <?php if ($site_name || $site_slogan): ?>
    		<hgroup id="site-name-slogan">
    		  <?php if ($site_name): ?>
    			<h1>
    			  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
    			</h1>
    		  <?php endif; ?>
    		</hgroup>
  	  <?php endif; ?>
  	  
  	  <div class="nav-collapse">
    	  <nav role="navigation">
      		<?php if ($primary_nav): ?>
      		  <?php print $primary_nav; ?>
      		<?php endif; ?>
      	  
      		<?php if ($search): ?>
      		  <?php if ($search): print render($search); endif; ?>
      		<?php endif; ?>
      		
      		<?php if ($secondary_nav): ?>
      		  <?php print $secondary_nav; ?>
      		<?php endif; ?>
    		</nav>
  	  </div>         
  	</div>
  </div>
</header>

<div class="container">

  <header role="banner" id="page-header">
    <?php if ( $site_slogan ): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->
	
	<div class="row">
	  
    <?php if ($page['sidebar_first']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  
	  
	  <section class="<?php print _twitter_bootstrap_content_span($columns); ?>">  
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if ($breadcrumb): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?> 
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
	  </section>

    <?php if ($page['sidebar_second']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
  <footer class="footer container">
    <?php print render($page['footer']); ?>
  </footer>
</div>

<script>
(function($) {
    //remove N/A's from all forms
    $('.form-radio[value=_none]').parent().hide();
    //set the fieldset display equal to elements inside it. allows for correct toggling
    $('.form-radio').change(function(){
      $.each($('.field-group-fieldset'), function(){
        var container = $(this)
        setTimeout(function(){
          $(container).css('display', $('.form-wrapper', container).css('display'))
        }, 1)
      })
    })
    //hide the fieldset titles if elements inside it are hidden
    $.each($('.field-group-fieldset'), function(){
      var container = $(this)
      //have to set a slight delay to capture the inline elements added by the field dependencies
      setTimeout(function(){
        $(container).css('display', $('.form-wrapper', container).css('display'))
      }, 1)
    })
    var likertArrayAgree = ['#edit-field-public-familiar-und','#edit-field-improve-env-edu-und',
    '#edit-field-impact-env-edu-und', '#edit-field-impact-edu-policy-und','#edit-field-impact-health-und','#edit-field-impact-env-policy-und']
    $.each(likertArrayAgree, function(intIndex, objValue){
      $(objValue).prepend('<div class="likertScale">'+
        '<span class="likertStart">Strongly Disagree</span><span class="likertEnd">Strongly Agree</span></div>')
    })
    var likertArrayExtent = ['#edit-field-develop-proposal-und', '#edit-field-implementing-grant-und',
    '#edit-field-evaluating-grant-und','#edit-field-teacher-school-district-und','#edit-field-teacher-state-standards-und',
    '#edit-field-teacher-national-standards-und', '#edit-field-teacher-regional-prioritie-und',
    '#edit-field-standards-school-district-und','#edit-field-standards-state-und','#edit-field-standards-national-und',
    '#edit-field-standards-regional-und']
    $.each(likertArrayExtent, function(intIndex, objValue){
      if(intIndex < 3){
        $(objValue).prepend('<div class="likertScaleSmall noMargin">'+
        '<span class="likertStart">Not at all</span><span class="likertEnd">To a great extent</span></div>')
      } else {
        $(objValue).prepend('<div class="likertScaleSmall">'+
          '<span class="likertStart">Not at all</span><span class="likertEnd">To a great extent</span></div>')
        
      }
    })
    var likertArrayLikely = ['#edit-field-one-on-one-und','#edit-field-network-my-region-und',
    '#edit-field-network-other-region-und', '#edit-field-virtual-interaction-und',
    '#edit-field-subject-matter-experts-und','#edit-field-noaa-datasets-und','#edit-field-noaa-lessonplans-und',
    '#edit-field-access-research-und', '#edit-field-best-practices-und', '#edit-field-evaluation-assistance-und',
    '#edit-field-grant-management-assistanc-und', '#edit-field-grant-budgeting-assistance-und','#edit-field-learn-watershed-und',
    '#edit-field-learn-environmental-issues-und', '#edit-field-learn-local-policy-und', '#edit-field-learn-national-policy-und']
    $.each(likertArrayLikely, function(intIndex, objValue){
      $(objValue).prepend('<div class="likertScale">'+
        '<span class="likertStart">Extremely unlikely</span><span class="likertEnd">Extremely likely</span></div>')
    })
    
  
})(jQuery);
</script>

	

