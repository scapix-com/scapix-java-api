// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class TrayIcon_MessageType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::TrayIcon_MessageType>
{
	static constexpr fixed_string class_name = "java/awt/TrayIcon$MessageType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE)
#define SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::TrayIcon_MessageType : public jni::object_base<"java/awt/TrayIcon$MessageType",
	java::lang::Enum>
{
public:

	static jni::ref<java::awt::TrayIcon_MessageType> ERROR() { return get_static_field<"ERROR", jni::ref<java::awt::TrayIcon_MessageType>>(); }
	static jni::ref<java::awt::TrayIcon_MessageType> WARNING() { return get_static_field<"WARNING", jni::ref<java::awt::TrayIcon_MessageType>>(); }
	static jni::ref<java::awt::TrayIcon_MessageType> INFO() { return get_static_field<"INFO", jni::ref<java::awt::TrayIcon_MessageType>>(); }
	static jni::ref<java::awt::TrayIcon_MessageType> NONE() { return get_static_field<"NONE", jni::ref<java::awt::TrayIcon_MessageType>>(); }

	static jni::ref<jni::array<java::awt::TrayIcon_MessageType>> values() { return call_static_method<"values", jni::ref<jni::array<java::awt::TrayIcon_MessageType>>>(); }
	static jni::ref<java::awt::TrayIcon_MessageType> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::awt::TrayIcon_MessageType>>(p1); }

protected:

	TrayIcon_MessageType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_MESSAGETYPE
