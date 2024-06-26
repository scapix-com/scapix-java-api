// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class ExifInterface; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::ExifInterface>
{
	static constexpr fixed_string class_name = "android/media/ExifInterface";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::ExifInterface : public jni::object_base<"android/media/ExifInterface",
	java::lang::Object>
{
public:

	static jint ORIENTATION_FLIP_HORIZONTAL() { return get_static_field<"ORIENTATION_FLIP_HORIZONTAL", jint>(); }
	static jint ORIENTATION_FLIP_VERTICAL() { return get_static_field<"ORIENTATION_FLIP_VERTICAL", jint>(); }
	static jint ORIENTATION_NORMAL() { return get_static_field<"ORIENTATION_NORMAL", jint>(); }
	static jint ORIENTATION_ROTATE_180() { return get_static_field<"ORIENTATION_ROTATE_180", jint>(); }
	static jint ORIENTATION_ROTATE_270() { return get_static_field<"ORIENTATION_ROTATE_270", jint>(); }
	static jint ORIENTATION_ROTATE_90() { return get_static_field<"ORIENTATION_ROTATE_90", jint>(); }
	static jint ORIENTATION_TRANSPOSE() { return get_static_field<"ORIENTATION_TRANSPOSE", jint>(); }
	static jint ORIENTATION_TRANSVERSE() { return get_static_field<"ORIENTATION_TRANSVERSE", jint>(); }
	static jint ORIENTATION_UNDEFINED() { return get_static_field<"ORIENTATION_UNDEFINED", jint>(); }
	static jni::ref<java::lang::String> TAG_APERTURE() { return get_static_field<"TAG_APERTURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_DATETIME() { return get_static_field<"TAG_DATETIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_DATETIME_DIGITIZED() { return get_static_field<"TAG_DATETIME_DIGITIZED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_EXPOSURE_TIME() { return get_static_field<"TAG_EXPOSURE_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_FLASH() { return get_static_field<"TAG_FLASH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_FOCAL_LENGTH() { return get_static_field<"TAG_FOCAL_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_ALTITUDE() { return get_static_field<"TAG_GPS_ALTITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_ALTITUDE_REF() { return get_static_field<"TAG_GPS_ALTITUDE_REF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_DATESTAMP() { return get_static_field<"TAG_GPS_DATESTAMP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_LATITUDE() { return get_static_field<"TAG_GPS_LATITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_LATITUDE_REF() { return get_static_field<"TAG_GPS_LATITUDE_REF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_LONGITUDE() { return get_static_field<"TAG_GPS_LONGITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_LONGITUDE_REF() { return get_static_field<"TAG_GPS_LONGITUDE_REF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_PROCESSING_METHOD() { return get_static_field<"TAG_GPS_PROCESSING_METHOD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_GPS_TIMESTAMP() { return get_static_field<"TAG_GPS_TIMESTAMP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_IMAGE_LENGTH() { return get_static_field<"TAG_IMAGE_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_IMAGE_WIDTH() { return get_static_field<"TAG_IMAGE_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_ISO() { return get_static_field<"TAG_ISO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_MAKE() { return get_static_field<"TAG_MAKE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_MODEL() { return get_static_field<"TAG_MODEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_ORIENTATION() { return get_static_field<"TAG_ORIENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_SUBSEC_TIME() { return get_static_field<"TAG_SUBSEC_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_SUBSEC_TIME_DIG() { return get_static_field<"TAG_SUBSEC_TIME_DIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_SUBSEC_TIME_ORIG() { return get_static_field<"TAG_SUBSEC_TIME_ORIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAG_WHITE_BALANCE() { return get_static_field<"TAG_WHITE_BALANCE", jni::ref<java::lang::String>>(); }
	static jint WHITEBALANCE_AUTO() { return get_static_field<"WHITEBALANCE_AUTO", jint>(); }
	static jint WHITEBALANCE_MANUAL() { return get_static_field<"WHITEBALANCE_MANUAL", jint>(); }

	static jni::ref<android::media::ExifInterface> new_object(jni::ref<java::lang::String> filename) { return base_::new_object(filename); }
	jni::ref<java::lang::String> getAttribute(jni::ref<java::lang::String> tag) { return call_method<"getAttribute", jni::ref<java::lang::String>>(tag); }
	jint getAttributeInt(jni::ref<java::lang::String> tag, jint defaultValue) { return call_method<"getAttributeInt", jint>(tag, defaultValue); }
	jdouble getAttributeDouble(jni::ref<java::lang::String> tag, jdouble defaultValue) { return call_method<"getAttributeDouble", jdouble>(tag, defaultValue); }
	void setAttribute(jni::ref<java::lang::String> tag, jni::ref<java::lang::String> value) { return call_method<"setAttribute", void>(tag, value); }
	void saveAttributes() { return call_method<"saveAttributes", void>(); }
	jboolean hasThumbnail() { return call_method<"hasThumbnail", jboolean>(); }
	jni::ref<jni::array<jbyte>> getThumbnail() { return call_method<"getThumbnail", jni::ref<jni::array<jbyte>>>(); }
	jboolean getLatLong(jni::ref<jni::array<jfloat>> output) { return call_method<"getLatLong", jboolean>(output); }
	jdouble getAltitude(jdouble defaultValue) { return call_method<"getAltitude", jdouble>(defaultValue); }

protected:

	ExifInterface(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EXIFINTERFACE
