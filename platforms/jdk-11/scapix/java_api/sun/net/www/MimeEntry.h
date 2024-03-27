// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class MimeEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::MimeEntry>
{
	static constexpr fixed_string class_name = "sun/net/www/MimeEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY)
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URLConnection.h>
#include <scapix/java_api/sun/net/www/MimeTable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::MimeEntry : public jni::object_base<"sun/net/www/MimeEntry",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint UNKNOWN() { return get_static_field<"UNKNOWN", jint>(); }
	static jint LOAD_INTO_BROWSER() { return get_static_field<"LOAD_INTO_BROWSER", jint>(); }
	static jint SAVE_TO_FILE() { return get_static_field<"SAVE_TO_FILE", jint>(); }
	static jint LAUNCH_APPLICATION() { return get_static_field<"LAUNCH_APPLICATION", jint>(); }

	static jni::ref<sun::net::www::MimeEntry> new_object(jni::ref<java::lang::String> type) { return base_::new_object(type); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	void setType(jni::ref<java::lang::String> type) { return call_method<"setType", void>(type); }
	jint getAction() { return call_method<"getAction", jint>(); }
	void setAction(jint action, jni::ref<java::lang::String> command) { return call_method<"setAction", void>(action, command); }
	void setAction(jint action) { return call_method<"setAction", void>(action); }
	jni::ref<java::lang::String> getLaunchString() { return call_method<"getLaunchString", jni::ref<java::lang::String>>(); }
	void setCommand(jni::ref<java::lang::String> command) { return call_method<"setCommand", void>(command); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	void setDescription(jni::ref<java::lang::String> description) { return call_method<"setDescription", void>(description); }
	jni::ref<java::lang::String> getImageFileName() { return call_method<"getImageFileName", jni::ref<java::lang::String>>(); }
	void setImageFileName(jni::ref<java::lang::String> filename) { return call_method<"setImageFileName", void>(filename); }
	jni::ref<java::lang::String> getTempFileTemplate() { return call_method<"getTempFileTemplate", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getExtensions() { return call_method<"getExtensions", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getExtensionsAsList() { return call_method<"getExtensionsAsList", jni::ref<java::lang::String>>(); }
	void setExtensions(jni::ref<java::lang::String> extensionString) { return call_method<"setExtensions", void>(extensionString); }
	jni::ref<java::lang::Object> launch(jni::ref<java::net::URLConnection> urlc, jni::ref<java::io::InputStream> is, jni::ref<sun::net::www::MimeTable> mt) { return call_method<"launch", jni::ref<java::lang::Object>>(urlc, is, mt); }
	jboolean matches(jni::ref<java::lang::String> type) { return call_method<"matches", jboolean>(type); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toProperty() { return call_method<"toProperty", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MimeEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMEENTRY
