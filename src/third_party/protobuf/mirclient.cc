#define MIR_EXPORT __attribute__((visibility("default")))

extern "C" {
MIR_EXPORT void mir_arrow_cursor_name() {}
MIR_EXPORT void mir_blob_data() {}
MIR_EXPORT void mir_blob_from_display_config() {}
MIR_EXPORT void mir_blob_from_display_configuration() {}
MIR_EXPORT void mir_blob_onto_buffer() {}
MIR_EXPORT void mir_blob_release() {}
MIR_EXPORT void mir_blob_size() {}
MIR_EXPORT void mir_blob_to_display_config() {}
MIR_EXPORT void mir_blob_to_display_configuration() {}
MIR_EXPORT void mir_buffer_get_buffer_package() {}
MIR_EXPORT void mir_buffer_get_egl_image_parameters() {}
MIR_EXPORT void mir_buffer_get_error_message() {}
MIR_EXPORT void mir_buffer_get_height() {}
MIR_EXPORT void mir_buffer_get_pixel_format() {}
MIR_EXPORT void mir_buffer_get_width() {}
MIR_EXPORT void mir_buffer_is_valid() {}
MIR_EXPORT void mir_buffer_map() {}
MIR_EXPORT void mir_buffer_release() {}
MIR_EXPORT void mir_buffer_stream_get_current_buffer() {}
MIR_EXPORT void mir_buffer_stream_get_egl_native_window() {}
MIR_EXPORT void mir_buffer_stream_get_error_message() {}
MIR_EXPORT void mir_buffer_stream_get_graphics_region() {}
MIR_EXPORT void mir_buffer_stream_get_microseconds_till_vblank() {}
MIR_EXPORT void mir_buffer_stream_get_platform_type() {}
MIR_EXPORT void mir_buffer_stream_get_size() {}
MIR_EXPORT void mir_buffer_stream_get_swapinterval() {}
MIR_EXPORT void mir_buffer_stream_is_valid() {}
MIR_EXPORT void mir_buffer_stream_release() {}
MIR_EXPORT void mir_buffer_stream_release_sync() {}
MIR_EXPORT void mir_buffer_stream_set_scale() {}
MIR_EXPORT void mir_buffer_stream_set_scale_sync() {}
MIR_EXPORT void mir_buffer_stream_set_size() {}
MIR_EXPORT void mir_buffer_stream_set_swapinterval() {}
MIR_EXPORT void mir_buffer_stream_swap_buffers() {}
MIR_EXPORT void mir_buffer_stream_swap_buffers_sync() {}
MIR_EXPORT void mir_buffer_unmap() {}
MIR_EXPORT void mir_busy_cursor_name() {}
MIR_EXPORT void mir_caret_cursor_name() {}
MIR_EXPORT void mir_closed_hand_cursor_name() {}
MIR_EXPORT void mir_connect() {}
MIR_EXPORT void mir_connection_allocate_buffer() {}
MIR_EXPORT void mir_connection_allocate_buffer_sync() {}
MIR_EXPORT void mir_connection_apply_display_config() {}
MIR_EXPORT void mir_connection_apply_session_display_config() {}
MIR_EXPORT void mir_connection_apply_session_input_config() {}
MIR_EXPORT void mir_connection_cancel_base_display_configuration_preview() {}
MIR_EXPORT void mir_connection_confirm_base_display_configuration() {}
MIR_EXPORT void mir_connection_create_buffer_stream() {}
MIR_EXPORT void mir_connection_create_buffer_stream_sync() {}
MIR_EXPORT void mir_connection_create_display_config() {}
MIR_EXPORT void mir_connection_create_display_configuration() {}
MIR_EXPORT void mir_connection_create_input_config() {}
MIR_EXPORT void mir_connection_create_prompt_session_sync() {}
MIR_EXPORT void mir_connection_create_render_surface() {}
MIR_EXPORT void mir_connection_create_render_surface_sync() {}
MIR_EXPORT void mir_connection_create_screencast_sync() {}
MIR_EXPORT void mir_connection_create_spec_for_changes() {}
MIR_EXPORT void mir_connection_create_spec_for_dialog() {}
MIR_EXPORT void mir_connection_create_spec_for_input_method() {}
MIR_EXPORT void mir_connection_create_spec_for_menu() {}
MIR_EXPORT void mir_connection_create_spec_for_modal_dialog() {}
MIR_EXPORT void mir_connection_create_spec_for_normal_surface() {}
MIR_EXPORT void mir_connection_create_spec_for_tip() {}
MIR_EXPORT void mir_connection_create_spec_for_tooltip() {}
MIR_EXPORT void mir_connection_enumerate_extensions() {}
MIR_EXPORT void mir_connection_get_available_surface_formats() {}
MIR_EXPORT void mir_connection_get_egl_native_display() {}
MIR_EXPORT void mir_connection_get_egl_pixel_format() {}
MIR_EXPORT void mir_connection_get_error_message() {}
MIR_EXPORT void mir_connection_get_graphics_module() {}
MIR_EXPORT void mir_connection_get_platform() {}
MIR_EXPORT void mir_connection_is_valid() {}
MIR_EXPORT void mir_connection_platform_operation() {}
MIR_EXPORT void mir_connection_pong() {}
MIR_EXPORT void mir_connection_present_mode_supported() {}
MIR_EXPORT void mir_connection_preview_base_display_configuration() {}
MIR_EXPORT void mir_connection_release() {}
MIR_EXPORT void mir_connection_remove_session_display_config() {}
MIR_EXPORT void mir_connection_request_extension() {}
MIR_EXPORT void mir_connection_set_base_display_config() {}
MIR_EXPORT void mir_connection_set_base_input_config() {}
MIR_EXPORT void mir_connection_set_display_config_change_callback() {}
MIR_EXPORT void mir_connection_set_error_callback() {}
MIR_EXPORT void mir_connection_set_input_config_change_callback() {}
MIR_EXPORT void mir_connection_set_lifecycle_event_callback() {}
MIR_EXPORT void mir_connection_set_ping_event_callback() {}
MIR_EXPORT void mir_connect_sync() {}
MIR_EXPORT void mir_cookie_buffer_size() {}
MIR_EXPORT void mir_cookie_from_buffer() {}
MIR_EXPORT void mir_cookie_release() {}
MIR_EXPORT void mir_cookie_to_buffer() {}
MIR_EXPORT void mir_create_dialog_window_spec() {}
MIR_EXPORT void mir_create_freestyle_window_spec() {}
MIR_EXPORT void mir_create_gloss_window_spec() {}
MIR_EXPORT void mir_create_input_method_window_spec() {}
MIR_EXPORT void mir_create_menu_window_spec() {}
MIR_EXPORT void mir_create_modal_dialog_window_spec() {}
MIR_EXPORT void mir_create_normal_window_spec() {}
MIR_EXPORT void mir_create_satellite_window_spec() {}
MIR_EXPORT void mir_create_screencast_spec() {}
MIR_EXPORT void mir_create_surface_spec() {}
MIR_EXPORT void mir_create_tip_window_spec() {}
MIR_EXPORT void mir_create_utility_window_spec() {}
MIR_EXPORT void mir_create_window() {}
MIR_EXPORT void mir_create_window_spec() {}
MIR_EXPORT void mir_create_window_sync() {}
MIR_EXPORT void mir_crosshair_cursor_name() {}
MIR_EXPORT void mir_cursor_configuration_destroy() {}
MIR_EXPORT void mir_cursor_configuration_from_buffer_stream() {}
MIR_EXPORT void mir_cursor_configuration_from_name() {}
MIR_EXPORT void mir_cursor_configuration_from_render_surface() {}
MIR_EXPORT void mir_default_cursor_name() {}
MIR_EXPORT void mir_diagonal_resize_bottom_to_top_cursor_name() {}
MIR_EXPORT void mir_diagonal_resize_top_to_bottom_cursor_name() {}
MIR_EXPORT void mir_disabled_cursor_name() {}
MIR_EXPORT void mir_display_config_destroy() {}
MIR_EXPORT void mir_display_config_get_max_simultaneous_outputs() {}
MIR_EXPORT void mir_display_config_get_mutable_output() {}
MIR_EXPORT void mir_display_config_get_num_outputs() {}
MIR_EXPORT void mir_display_config_get_output() {}
MIR_EXPORT void mir_display_config_release() {}
MIR_EXPORT void mir_display_output_type_name() {}
MIR_EXPORT void mir_error_get_code() {}
MIR_EXPORT void mir_error_get_domain() {}
MIR_EXPORT void mir_event_get_close_surface_event() {}
MIR_EXPORT void mir_event_get_input_configuration_event() {}
MIR_EXPORT void mir_event_get_input_device_state_event() {}
MIR_EXPORT void mir_event_get_input_event() {}
MIR_EXPORT void mir_event_get_keymap_event() {}
MIR_EXPORT void mir_event_get_orientation_event() {}
MIR_EXPORT void mir_event_get_prompt_session_event() {}
MIR_EXPORT void mir_event_get_resize_event() {}
MIR_EXPORT void mir_event_get_surface_event() {}
MIR_EXPORT void mir_event_get_surface_output_event() {}
MIR_EXPORT void mir_event_get_surface_placement_event() {}
MIR_EXPORT void mir_event_get_type() {}
MIR_EXPORT void mir_event_get_window_event() {}
MIR_EXPORT void mir_event_get_window_output_event() {}
MIR_EXPORT void mir_event_get_window_placement_event() {}
MIR_EXPORT void mir_event_ref() {}
MIR_EXPORT void mir_event_unref() {}
MIR_EXPORT void mir_get_client_api_version() {}
MIR_EXPORT void mir_horizontal_resize_cursor_name() {}
MIR_EXPORT void mir_hsplit_resize_cursor_name() {}
MIR_EXPORT void mir_input_config_destroy() {}
MIR_EXPORT void mir_input_config_device_count() {}
MIR_EXPORT void mir_input_config_get_device() {}
MIR_EXPORT void mir_input_config_get_device_by_id() {}
MIR_EXPORT void mir_input_config_get_mutable_device() {}
MIR_EXPORT void mir_input_config_get_mutable_device_by_id() {}
MIR_EXPORT void mir_input_config_release() {}
MIR_EXPORT void mir_input_configuration_event_get_action() {}
MIR_EXPORT void mir_input_configuration_event_get_device_id() {}
MIR_EXPORT void mir_input_configuration_event_get_time() {}
MIR_EXPORT void mir_input_device_get_capabilities() {}
MIR_EXPORT void mir_input_device_get_id() {}
MIR_EXPORT void mir_input_device_get_keyboard_config() {}
MIR_EXPORT void mir_input_device_get_mutable_keyboard_config() {}
MIR_EXPORT void mir_input_device_get_mutable_pointer_config() {}
MIR_EXPORT void mir_input_device_get_mutable_touchpad_config() {}
MIR_EXPORT void mir_input_device_get_mutable_touchscreen_config() {}
MIR_EXPORT void mir_input_device_get_name() {}
MIR_EXPORT void mir_input_device_get_pointer_config() {}
MIR_EXPORT void mir_input_device_get_touchpad_config() {}
MIR_EXPORT void mir_input_device_get_touchscreen_config() {}
MIR_EXPORT void mir_input_device_get_unique_id() {}
MIR_EXPORT void mir_input_device_state_event_device_count() {}
MIR_EXPORT void mir_input_device_state_event_device_id() {}
MIR_EXPORT void mir_input_device_state_event_device_pointer_buttons() {}
MIR_EXPORT void mir_input_device_state_event_device_pressed_keys_count() {}
MIR_EXPORT void mir_input_device_state_event_device_pressed_keys_for_index() {}
MIR_EXPORT void mir_input_device_state_event_modifiers() {}
MIR_EXPORT void mir_input_device_state_event_pointer_axis() {}
MIR_EXPORT void mir_input_device_state_event_pointer_buttons() {}
MIR_EXPORT void mir_input_device_state_event_time() {}
MIR_EXPORT void mir_input_event_get_cookie() {}
MIR_EXPORT void mir_input_event_get_device_id() {}
MIR_EXPORT void mir_input_event_get_event() {}
MIR_EXPORT void mir_input_event_get_event_time() {}
MIR_EXPORT void mir_input_event_get_keyboard_event() {}
MIR_EXPORT void mir_input_event_get_pointer_event() {}
MIR_EXPORT void mir_input_event_get_touch_event() {}
MIR_EXPORT void mir_input_event_get_type() {}
MIR_EXPORT void mir_input_event_has_cookie() {}
MIR_EXPORT void mir_keyboard_config_get_keymap_layout() {}
MIR_EXPORT void mir_keyboard_config_get_keymap_model() {}
MIR_EXPORT void mir_keyboard_config_get_keymap_options() {}
MIR_EXPORT void mir_keyboard_config_get_keymap_variant() {}
MIR_EXPORT void mir_keyboard_config_set_keymap_layout() {}
MIR_EXPORT void mir_keyboard_config_set_keymap_model() {}
MIR_EXPORT void mir_keyboard_config_set_keymap_options() {}
MIR_EXPORT void mir_keyboard_config_set_keymap_variant() {}
MIR_EXPORT void mir_keyboard_event_action() {}
MIR_EXPORT void mir_keyboard_event_input_event() {}
MIR_EXPORT void mir_keyboard_event_key_code() {}
MIR_EXPORT void mir_keyboard_event_key_text() {}
MIR_EXPORT void mir_keyboard_event_modifiers() {}
MIR_EXPORT void mir_keyboard_event_scan_code() {}
MIR_EXPORT void mir_keymap_event_get_device_id() {}
MIR_EXPORT void mir_keymap_event_get_keymap_buffer() {}
MIR_EXPORT void mir_omnidirectional_resize_cursor_name() {}
MIR_EXPORT void mir_open_hand_cursor_name() {}
MIR_EXPORT void mir_orientation_event_get_direction() {}
MIR_EXPORT void mir_output_disable() {}
MIR_EXPORT void mir_output_enable() {}
MIR_EXPORT void mir_output_get_connection_state() {}
MIR_EXPORT void mir_output_get_current_mode() {}
MIR_EXPORT void mir_output_get_current_mode_index() {}
MIR_EXPORT void mir_output_get_current_pixel_format() {}
MIR_EXPORT void mir_output_get_edid() {}
MIR_EXPORT void mir_output_get_edid_size() {}
MIR_EXPORT void mir_output_get_form_factor() {}
MIR_EXPORT void mir_output_get_gamma() {}
MIR_EXPORT void mir_output_get_gamma_size() {}
MIR_EXPORT void mir_output_get_id() {}
MIR_EXPORT void mir_output_get_logical_height() {}
MIR_EXPORT void mir_output_get_logical_width() {}
MIR_EXPORT void mir_output_get_mode() {}
MIR_EXPORT void mir_output_get_model() {}
MIR_EXPORT void mir_output_get_num_modes() {}
MIR_EXPORT void mir_output_get_num_pixel_formats() {}
MIR_EXPORT void mir_output_get_orientation() {}
MIR_EXPORT void mir_output_get_physical_height_mm() {}
MIR_EXPORT void mir_output_get_physical_width_mm() {}
MIR_EXPORT void mir_output_get_pixel_format() {}
MIR_EXPORT void mir_output_get_position_x() {}
MIR_EXPORT void mir_output_get_position_y() {}
MIR_EXPORT void mir_output_get_power_mode() {}
MIR_EXPORT void mir_output_get_preferred_mode() {}
MIR_EXPORT void mir_output_get_preferred_mode_index() {}
MIR_EXPORT void mir_output_get_scale_factor() {}
MIR_EXPORT void mir_output_get_subpixel_arrangement() {}
MIR_EXPORT void mir_output_get_type() {}
MIR_EXPORT void mir_output_has_custom_logical_size() {}
MIR_EXPORT void mir_output_is_enabled() {}
MIR_EXPORT void mir_output_is_gamma_supported() {}
MIR_EXPORT void mir_output_mode_get_height() {}
MIR_EXPORT void mir_output_mode_get_refresh_rate() {}
MIR_EXPORT void mir_output_mode_get_width() {}
MIR_EXPORT void mir_output_set_current_mode() {}
MIR_EXPORT void mir_output_set_gamma() {}
MIR_EXPORT void mir_output_set_logical_size() {}
MIR_EXPORT void mir_output_set_orientation() {}
MIR_EXPORT void mir_output_set_pixel_format() {}
MIR_EXPORT void mir_output_set_position() {}
MIR_EXPORT void mir_output_set_power_mode() {}
MIR_EXPORT void mir_output_set_scale_factor() {}
MIR_EXPORT void mir_output_type_name() {}
MIR_EXPORT void mir_persistent_id_as_string() {}
MIR_EXPORT void mir_persistent_id_from_string() {}
MIR_EXPORT void mir_persistent_id_is_valid() {}
MIR_EXPORT void mir_persistent_id_release() {}
MIR_EXPORT void mir_platform_message_create() {}
MIR_EXPORT void mir_platform_message_get_data() {}
MIR_EXPORT void mir_platform_message_get_fds() {}
MIR_EXPORT void mir_platform_message_get_opcode() {}
MIR_EXPORT void mir_platform_message_release() {}
MIR_EXPORT void mir_platform_message_set_data() {}
MIR_EXPORT void mir_platform_message_set_fds() {}
MIR_EXPORT void mir_pointer_config_get_acceleration() {}
MIR_EXPORT void mir_pointer_config_get_acceleration_bias() {}
MIR_EXPORT void mir_pointer_config_get_handedness() {}
MIR_EXPORT void mir_pointer_config_get_horizontal_scroll_scale() {}
MIR_EXPORT void mir_pointer_config_get_vertical_scroll_scale() {}
MIR_EXPORT void mir_pointer_config_set_acceleration() {}
MIR_EXPORT void mir_pointer_config_set_acceleration_bias() {}
MIR_EXPORT void mir_pointer_config_set_handedness() {}
MIR_EXPORT void mir_pointer_config_set_horizontal_scroll_scale() {}
MIR_EXPORT void mir_pointer_config_set_vertical_scroll_scale() {}
MIR_EXPORT void mir_pointer_event_action() {}
MIR_EXPORT void mir_pointer_event_axis_value() {}
MIR_EXPORT void mir_pointer_event_buttons() {}
MIR_EXPORT void mir_pointer_event_button_state() {}
MIR_EXPORT void mir_pointer_event_input_event() {}
MIR_EXPORT void mir_pointer_event_modifiers() {}
MIR_EXPORT void mir_pointing_hand_cursor_name() {}
MIR_EXPORT void mir_presentation_chain_get_error_message() {}
MIR_EXPORT void mir_presentation_chain_is_valid() {}
MIR_EXPORT void mir_presentation_chain_set_dropping_mode() {}
MIR_EXPORT void mir_presentation_chain_set_mode() {}
MIR_EXPORT void mir_presentation_chain_set_queueing_mode() {}
MIR_EXPORT void mir_presentation_chain_submit_buffer() {}
MIR_EXPORT void mir_prompt_session_error_message() {}
MIR_EXPORT void mir_prompt_session_event_get_state() {}
MIR_EXPORT void mir_prompt_session_is_valid() {}
MIR_EXPORT void mir_prompt_session_new_fds_for_prompt_providers() {}
MIR_EXPORT void mir_prompt_session_new_fds_for_prompt_providers_sync() {}
MIR_EXPORT void mir_prompt_session_release_sync() {}
MIR_EXPORT void mir_render_surface_get_buffer_stream() {}
MIR_EXPORT void mir_render_surface_get_error_message() {}
MIR_EXPORT void mir_render_surface_get_presentation_chain() {}
MIR_EXPORT void mir_render_surface_get_size() {}
MIR_EXPORT void mir_render_surface_is_valid() {}
MIR_EXPORT void mir_render_surface_release() {}
MIR_EXPORT void mir_render_surface_set_size() {}
MIR_EXPORT void mir_resize_event_get_height() {}
MIR_EXPORT void mir_resize_event_get_width() {}
MIR_EXPORT void mir_screencast_capture_to_buffer() {}
MIR_EXPORT void mir_screencast_capture_to_buffer_sync() {}
MIR_EXPORT void mir_screencast_create_sync() {}
MIR_EXPORT void mir_screencast_get_buffer_stream() {}
MIR_EXPORT void mir_screencast_get_error_message() {}
MIR_EXPORT void mir_screencast_is_valid() {}
MIR_EXPORT void mir_screencast_release_sync() {}
MIR_EXPORT void mir_screencast_spec_release() {}
MIR_EXPORT void mir_screencast_spec_set_capture_region() {}
MIR_EXPORT void mir_screencast_spec_set_height() {}
MIR_EXPORT void mir_screencast_spec_set_mirror_mode() {}
MIR_EXPORT void mir_screencast_spec_set_number_of_buffers() {}
MIR_EXPORT void mir_screencast_spec_set_pixel_format() {}
MIR_EXPORT void mir_screencast_spec_set_width() {}
MIR_EXPORT void mir_surface_apply_spec() {}
MIR_EXPORT void mir_surface_configure_cursor() {}
MIR_EXPORT void mir_surface_create() {}
MIR_EXPORT void mir_surface_create_sync() {}
MIR_EXPORT void mir_surface_event_get_attribute() {}
MIR_EXPORT void mir_surface_event_get_attribute_value() {}
MIR_EXPORT void mir_surface_get_buffer_stream() {}
MIR_EXPORT void mir_surface_get_dpi() {}
MIR_EXPORT void mir_surface_get_error_message() {}
MIR_EXPORT void mir_surface_get_focus() {}
MIR_EXPORT void mir_surface_get_orientation() {}
MIR_EXPORT void mir_surface_get_parameters() {}
MIR_EXPORT void mir_surface_get_preferred_orientation() {}
MIR_EXPORT void mir_surface_get_state() {}
MIR_EXPORT void mir_surface_get_swapinterval() {}
MIR_EXPORT void mir_surface_get_type() {}
MIR_EXPORT void mir_surface_get_visibility() {}
MIR_EXPORT void mir_surface_is_valid() {}
MIR_EXPORT void mir_surface_output_event_get_dpi() {}
MIR_EXPORT void mir_surface_output_event_get_form_factor() {}
MIR_EXPORT void mir_surface_output_event_get_output_id() {}
MIR_EXPORT void mir_surface_output_event_get_refresh_rate() {}
MIR_EXPORT void mir_surface_output_event_get_scale() {}
MIR_EXPORT void mir_surface_placement_get_relative_position() {}
MIR_EXPORT void mir_surface_raise() {}
MIR_EXPORT void mir_surface_release() {}
MIR_EXPORT void mir_surface_release_sync() {}
MIR_EXPORT void mir_surface_request_persistent_id() {}
MIR_EXPORT void mir_surface_request_persistent_id_sync() {}
MIR_EXPORT void mir_surface_set_event_handler() {}
MIR_EXPORT void mir_surface_set_preferred_orientation() {}
MIR_EXPORT void mir_surface_set_state() {}
MIR_EXPORT void mir_surface_set_swapinterval() {}
MIR_EXPORT void mir_surface_spec_attach_to_foreign_parent() {}
MIR_EXPORT void mir_surface_spec_release() {}
MIR_EXPORT void mir_surface_spec_set_buffer_usage() {}
MIR_EXPORT void mir_surface_spec_set_event_handler() {}
MIR_EXPORT void mir_surface_spec_set_fullscreen_on_output() {}
MIR_EXPORT void mir_surface_spec_set_height() {}
MIR_EXPORT void mir_surface_spec_set_height_increment() {}
MIR_EXPORT void mir_surface_spec_set_input_shape() {}
MIR_EXPORT void mir_surface_spec_set_max_aspect_ratio() {}
MIR_EXPORT void mir_surface_spec_set_max_height() {}
MIR_EXPORT void mir_surface_spec_set_max_width() {}
MIR_EXPORT void mir_surface_spec_set_min_aspect_ratio() {}
MIR_EXPORT void mir_surface_spec_set_min_height() {}
MIR_EXPORT void mir_surface_spec_set_min_width() {}
MIR_EXPORT void mir_surface_spec_set_name() {}
MIR_EXPORT void mir_surface_spec_set_parent() {}
MIR_EXPORT void mir_surface_spec_set_pixel_format() {}
MIR_EXPORT void mir_surface_spec_set_placement() {}
MIR_EXPORT void mir_surface_spec_set_pointer_confinement() {}
MIR_EXPORT void mir_surface_spec_set_preferred_orientation() {}
MIR_EXPORT void mir_surface_spec_set_shell_chrome() {}
MIR_EXPORT void mir_surface_spec_set_state() {}
MIR_EXPORT void mir_surface_spec_set_streams() {}
MIR_EXPORT void mir_surface_spec_set_type() {}
MIR_EXPORT void mir_surface_spec_set_width() {}
MIR_EXPORT void mir_surface_spec_set_width_increment() {}
MIR_EXPORT void mir_touch_event_action() {}
MIR_EXPORT void mir_touch_event_axis_value() {}
MIR_EXPORT void mir_touch_event_id() {}
MIR_EXPORT void mir_touch_event_input_event() {}
MIR_EXPORT void mir_touch_event_modifiers() {}
MIR_EXPORT void mir_touch_event_point_count() {}
MIR_EXPORT void mir_touch_event_tooltype() {}
MIR_EXPORT void mir_touchpad_config_get_button_down_scroll_button() {}
MIR_EXPORT void mir_touchpad_config_get_click_modes() {}
MIR_EXPORT void mir_touchpad_config_get_disable_while_typing() {}
MIR_EXPORT void mir_touchpad_config_get_disable_with_mouse() {}
MIR_EXPORT void mir_touchpad_config_get_middle_mouse_button_emulation() {}
MIR_EXPORT void mir_touchpad_config_get_scroll_modes() {}
MIR_EXPORT void mir_touchpad_config_get_tap_to_click() {}
MIR_EXPORT void mir_touchpad_config_set_button_down_scroll_button() {}
MIR_EXPORT void mir_touchpad_config_set_click_modes() {}
MIR_EXPORT void mir_touchpad_config_set_disable_while_typing() {}
MIR_EXPORT void mir_touchpad_config_set_disable_with_mouse() {}
MIR_EXPORT void mir_touchpad_config_set_middle_mouse_button_emulation() {}
MIR_EXPORT void mir_touchpad_config_set_scroll_modes() {}
MIR_EXPORT void mir_touchpad_config_set_tap_to_click() {}
MIR_EXPORT void mir_touchscreen_config_get_mapping_mode() {}
MIR_EXPORT void mir_touchscreen_config_get_output_id() {}
MIR_EXPORT void mir_touchscreen_config_set_mapping_mode() {}
MIR_EXPORT void mir_touchscreen_config_set_output_id() {}
MIR_EXPORT void mir_vertical_resize_cursor_name() {}
MIR_EXPORT void mir_vsplit_resize_cursor_name() {}
MIR_EXPORT void mir_wait_for() {}
MIR_EXPORT void mir_wait_for_one() {}
MIR_EXPORT void mir_window_apply_spec() {}
MIR_EXPORT void mir_window_configure_cursor() {}
MIR_EXPORT void mir_window_event_get_attribute() {}
MIR_EXPORT void mir_window_event_get_attribute_value() {}
MIR_EXPORT void mir_window_get_buffer_stream() {}
MIR_EXPORT void mir_window_get_connection() {}
MIR_EXPORT void mir_window_get_dpi() {}
MIR_EXPORT void mir_window_get_error_message() {}
MIR_EXPORT void mir_window_get_focus_state() {}
MIR_EXPORT void mir_window_get_orientation() {}
MIR_EXPORT void mir_window_get_parameters() {}
MIR_EXPORT void mir_window_get_preferred_orientation() {}
MIR_EXPORT void mir_window_get_state() {}
MIR_EXPORT void mir_window_get_type() {}
MIR_EXPORT void mir_window_get_visibility() {}
MIR_EXPORT void mir_window_id_as_string() {}
MIR_EXPORT void mir_window_id_from_string() {}
MIR_EXPORT void mir_window_id_is_valid() {}
MIR_EXPORT void mir_window_id_release() {}
MIR_EXPORT void mir_window_is_valid() {}
MIR_EXPORT void mir_window_output_event_get_dpi() {}
MIR_EXPORT void mir_window_output_event_get_form_factor() {}
MIR_EXPORT void mir_window_output_event_get_output_id() {}
MIR_EXPORT void mir_window_output_event_get_refresh_rate() {}
MIR_EXPORT void mir_window_output_event_get_scale() {}
MIR_EXPORT void mir_window_placement_get_relative_position() {}
MIR_EXPORT void mir_window_raise() {}
MIR_EXPORT void mir_window_release() {}
MIR_EXPORT void mir_window_release_sync() {}
MIR_EXPORT void mir_window_request_persistent_id() {}
MIR_EXPORT void mir_window_request_persistent_id_sync() {}
MIR_EXPORT void mir_window_request_user_move() {}
MIR_EXPORT void mir_window_request_window_id() {}
MIR_EXPORT void mir_window_request_window_id_sync() {}
MIR_EXPORT void mir_window_set_event_handler() {}
MIR_EXPORT void mir_window_set_preferred_orientation() {}
MIR_EXPORT void mir_window_set_state() {}
MIR_EXPORT void mir_window_spec_add_render_surface() {}
MIR_EXPORT void mir_window_spec_attach_to_foreign_parent() {}
MIR_EXPORT void mir_window_spec_release() {}
MIR_EXPORT void mir_window_spec_set_buffer_usage() {}
MIR_EXPORT void mir_window_spec_set_cursor_name() {}
MIR_EXPORT void mir_window_spec_set_cursor_render_surface() {}
MIR_EXPORT void mir_window_spec_set_event_handler() {}
MIR_EXPORT void mir_window_spec_set_fullscreen_on_output() {}
MIR_EXPORT void mir_window_spec_set_height() {}
MIR_EXPORT void mir_window_spec_set_height_increment() {}
MIR_EXPORT void mir_window_spec_set_input_shape() {}
MIR_EXPORT void mir_window_spec_set_max_aspect_ratio() {}
MIR_EXPORT void mir_window_spec_set_max_height() {}
MIR_EXPORT void mir_window_spec_set_max_width() {}
MIR_EXPORT void mir_window_spec_set_min_aspect_ratio() {}
MIR_EXPORT void mir_window_spec_set_min_height() {}
MIR_EXPORT void mir_window_spec_set_min_width() {}
MIR_EXPORT void mir_window_spec_set_name() {}
MIR_EXPORT void mir_window_spec_set_parent() {}
MIR_EXPORT void mir_window_spec_set_pixel_format() {}
MIR_EXPORT void mir_window_spec_set_placement() {}
MIR_EXPORT void mir_window_spec_set_pointer_confinement() {}
MIR_EXPORT void mir_window_spec_set_preferred_orientation() {}
MIR_EXPORT void mir_window_spec_set_shell_chrome() {}
MIR_EXPORT void mir_window_spec_set_state() {}
MIR_EXPORT void mir_window_spec_set_streams() {}
MIR_EXPORT void mir_window_spec_set_type() {}
MIR_EXPORT void mir_window_spec_set_width() {}
MIR_EXPORT void mir_window_spec_set_width_increment() {}
}
