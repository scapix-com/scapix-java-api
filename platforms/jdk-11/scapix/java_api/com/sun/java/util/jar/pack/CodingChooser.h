// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class CodingChooser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::CodingChooser>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/CodingChooser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/CodingMethod.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::CodingChooser : public jni::object_base<"com/sun/java/util/jar/pack/CodingChooser",
	java::lang::Object>
{
public:

	static jint MIN_EFFORT() { return get_static_field<"MIN_EFFORT", jint>(); }
	static jint MID_EFFORT() { return get_static_field<"MID_EFFORT", jint>(); }
	static jint MAX_EFFORT() { return get_static_field<"MAX_EFFORT", jint>(); }
	static jint POP_EFFORT() { return get_static_field<"POP_EFFORT", jint>(); }
	static jint RUN_EFFORT() { return get_static_field<"RUN_EFFORT", jint>(); }
	static jint BYTE_SIZE() { return get_static_field<"BYTE_SIZE", jint>(); }
	static jint ZIP_SIZE() { return get_static_field<"ZIP_SIZE", jint>(); }

	void computeSize(jni::ref<com::sun::java::util::jar::pack::CodingMethod> c, jni::ref<jni::array<jint>> values, jint start, jint end, jni::ref<jni::array<jint>> sizes) { return call_method<"computeSize", void>(c, values, start, end, sizes); }
	void computeSize(jni::ref<com::sun::java::util::jar::pack::CodingMethod> c, jni::ref<jni::array<jint>> values, jni::ref<jni::array<jint>> sizes) { return call_method<"computeSize", void>(c, values, sizes); }
	jni::ref<jni::array<jint>> computeSize(jni::ref<com::sun::java::util::jar::pack::CodingMethod> c, jni::ref<jni::array<jint>> values, jint start, jint end) { return call_method<"computeSize", jni::ref<jni::array<jint>>>(c, values, start, end); }
	jni::ref<jni::array<jint>> computeSize(jni::ref<com::sun::java::util::jar::pack::CodingMethod> c, jni::ref<jni::array<jint>> values) { return call_method<"computeSize", jni::ref<jni::array<jint>>>(c, values); }
	jint computeByteSize(jni::ref<com::sun::java::util::jar::pack::CodingMethod> cm, jni::ref<jni::array<jint>> values, jint start, jint end) { return call_method<"computeByteSize", jint>(cm, values, start, end); }

protected:

	CodingChooser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CODINGCHOOSER
