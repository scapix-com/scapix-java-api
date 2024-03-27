// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class StringSupport_CharsetKind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::StringSupport_CharsetKind>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/StringSupport$CharsetKind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::StringSupport_CharsetKind : public jni::object_base<"jdk/internal/foreign/StringSupport$CharsetKind",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::foreign::StringSupport_CharsetKind> SINGLE_BYTE() { return get_static_field<"SINGLE_BYTE", jni::ref<jdk::internal::foreign::StringSupport_CharsetKind>>(); }
	static jni::ref<jdk::internal::foreign::StringSupport_CharsetKind> DOUBLE_BYTE() { return get_static_field<"DOUBLE_BYTE", jni::ref<jdk::internal::foreign::StringSupport_CharsetKind>>(); }
	static jni::ref<jdk::internal::foreign::StringSupport_CharsetKind> QUAD_BYTE() { return get_static_field<"QUAD_BYTE", jni::ref<jdk::internal::foreign::StringSupport_CharsetKind>>(); }

	static jni::ref<jni::array<jdk::internal::foreign::StringSupport_CharsetKind>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::foreign::StringSupport_CharsetKind>>>(); }
	static jni::ref<jdk::internal::foreign::StringSupport_CharsetKind> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::foreign::StringSupport_CharsetKind>>(name); }
	jint terminatorCharSize() { return call_method<"terminatorCharSize", jint>(); }
	static jni::ref<jdk::internal::foreign::StringSupport_CharsetKind> of(jni::ref<java::nio::charset::Charset> charset) { return call_static_method<"of", jni::ref<jdk::internal::foreign::StringSupport_CharsetKind>>(charset); }

protected:

	StringSupport_CharsetKind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_STRINGSUPPORT_CHARSETKIND
