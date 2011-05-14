<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function charity_drive_site_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
