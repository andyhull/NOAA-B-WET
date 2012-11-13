<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <link href="/sites/all/themes/mwee/stylesheets/ie.css" rel="stylesheet" type="text/css" />
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <!--[if IE]>
    <link href="/sites/all/themes/mwee/stylesheets/ie.css" rel="stylesheet" type="text/css" />
   <![endif]-->
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="pageLoad"></div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
