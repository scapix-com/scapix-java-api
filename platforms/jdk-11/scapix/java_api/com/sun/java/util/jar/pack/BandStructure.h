// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class BandStructure; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::BandStructure>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/BandStructure";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Coding.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/CodingMethod.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Version.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::BandStructure : public jni::object_base<"com/sun/java/util/jar/pack/BandStructure",
	java::lang::Object>
{
public:

	static jint NO_PHASE() { return get_static_field<"NO_PHASE", jint>(); }
	static jint COLLECT_PHASE() { return get_static_field<"COLLECT_PHASE", jint>(); }
	static jint FROZEN_PHASE() { return get_static_field<"FROZEN_PHASE", jint>(); }
	static jint WRITE_PHASE() { return get_static_field<"WRITE_PHASE", jint>(); }
	static jint EXPECT_PHASE() { return get_static_field<"EXPECT_PHASE", jint>(); }
	static jint READ_PHASE() { return get_static_field<"READ_PHASE", jint>(); }
	static jint DISBURSE_PHASE() { return get_static_field<"DISBURSE_PHASE", jint>(); }
	static jint DONE_PHASE() { return get_static_field<"DONE_PHASE", jint>(); }
	static jint ADH_CONTEXT_MASK() { return get_static_field<"ADH_CONTEXT_MASK", jint>(); }
	static jint ADH_BIT_SHIFT() { return get_static_field<"ADH_BIT_SHIFT", jint>(); }
	static jint ADH_BIT_IS_LSB() { return get_static_field<"ADH_BIT_IS_LSB", jint>(); }
	static jint ATTR_INDEX_OVERFLOW() { return get_static_field<"ATTR_INDEX_OVERFLOW", jint>(); }
	jni::ref<jni::array<jint>> attrIndexLimit() { return get_field<"attrIndexLimit", jni::ref<jni::array<jint>>>(); }
	void attrIndexLimit(jni::ref<jni::array<jint>> v) { set_field<"attrIndexLimit", jni::ref<jni::array<jint>>>(v); }
	jint shortCodeHeader_h_limit() { return get_field<"shortCodeHeader_h_limit", jint>(); }

	void initHighestClassVersion(jni::ref<com::sun::java::util::jar::pack::Package_Version> highestClassVersion) { return call_method<"initHighestClassVersion", void>(highestClassVersion); }
	jni::ref<com::sun::java::util::jar::pack::Package_Version> getHighestClassVersion() { return call_method<"getHighestClassVersion", jni::ref<com::sun::java::util::jar::pack::Package_Version>>(); }
	static jni::ref<com::sun::java::util::jar::pack::Coding> codingForIndex(jint i) { return call_static_method<"codingForIndex", jni::ref<com::sun::java::util::jar::pack::Coding>>(i); }
	static jint indexOf(jni::ref<com::sun::java::util::jar::pack::Coding> c) { return call_static_method<"indexOf", jint>(c); }
	static jni::ref<jni::array<com::sun::java::util::jar::pack::Coding>> getBasicCodings() { return call_static_method<"getBasicCodings", jni::ref<jni::array<com::sun::java::util::jar::pack::Coding>>>(); }
	static jint parseMetaCoding(jni::ref<jni::array<jbyte>> bytes, jint pos, jni::ref<com::sun::java::util::jar::pack::Coding> dflt, jni::ref<jni::array<com::sun::java::util::jar::pack::CodingMethod>> res) { return call_static_method<"parseMetaCoding", jint>(bytes, pos, dflt, res); }
	jni::ref<com::sun::java::util::jar::pack::CodingMethod> chooseCoding(jni::ref<jni::array<jint>> values, jint start, jint end, jni::ref<com::sun::java::util::jar::pack::Coding> regular, jni::ref<java::lang::String> bandName, jni::ref<jni::array<jint>> sizes) { return call_method<"chooseCoding", jni::ref<com::sun::java::util::jar::pack::CodingMethod>>(values, start, end, regular, bandName, sizes); }

protected:

	BandStructure(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE