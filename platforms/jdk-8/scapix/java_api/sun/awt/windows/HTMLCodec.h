// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class HTMLCodec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::HTMLCodec>
{
	static constexpr fixed_string class_name = "sun/awt/windows/HTMLCodec";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/windows/EHTMLReadMode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::HTMLCodec : public jni::object_base<"sun/awt/windows/HTMLCodec",
	java::io::InputStream>
{
public:

	static jni::ref<java::lang::String> ENCODING() { return get_static_field<"ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERSION() { return get_static_field<"VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> START_HTML() { return get_static_field<"START_HTML", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> END_HTML() { return get_static_field<"END_HTML", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> START_FRAGMENT() { return get_static_field<"START_FRAGMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> END_FRAGMENT() { return get_static_field<"END_FRAGMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> START_SELECTION() { return get_static_field<"START_SELECTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> END_SELECTION() { return get_static_field<"END_SELECTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> START_FRAGMENT_CMT() { return get_static_field<"START_FRAGMENT_CMT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> END_FRAGMENT_CMT() { return get_static_field<"END_FRAGMENT_CMT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOURCE_URL() { return get_static_field<"SOURCE_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEF_SOURCE_URL() { return get_static_field<"DEF_SOURCE_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EOLN() { return get_static_field<"EOLN", jni::ref<java::lang::String>>(); }
	static jint BYTE_BUFFER_LEN() { return get_static_field<"BYTE_BUFFER_LEN", jint>(); }
	static jint CHAR_BUFFER_LEN() { return get_static_field<"CHAR_BUFFER_LEN", jint>(); }

	static jni::ref<jni::array<jbyte>> convertToHTMLFormat(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"convertToHTMLFormat", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<sun::awt::windows::HTMLCodec> new_object(jni::ref<java::io::InputStream> p1, jni::ref<sun::awt::windows::EHTMLReadMode> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getBaseURL() { return call_method<"getBaseURL", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jint read() { return call_method<"read", jint>(); }
	void close() { return call_method<"close", void>(); }

protected:

	HTMLCodec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_HTMLCODEC