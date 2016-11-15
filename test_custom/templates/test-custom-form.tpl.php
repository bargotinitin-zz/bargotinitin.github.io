
<h1 style='color:red;font-weight:bold;'><i>This form has been themed. looking little nesty...</i></h1>
<?php

/**
 * @file
 * Template file.
 */

#Uncomment to print the data.
// print "<pre>"; print_r($form); exit;

#Uncomment to print individual elements.
// print render($form['entity_name']);
// print render($form['email']);
// print render($form['phone']);
// print render($form['address']);
// print render($form['submit']);

// The below will print all the elements of the form.
print drupal_render_children($form);

?>

