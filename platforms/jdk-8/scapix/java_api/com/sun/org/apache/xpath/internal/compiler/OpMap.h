// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::compiler { class OpMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::OpMap>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/compiler/OpMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/compiler/OpMapVector.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::compiler::OpMap : public jni::object_base<"com/sun/org/apache/xpath/internal/compiler/OpMap",
	java::lang::Object>
{
public:

	static jint MAPINDEX_LENGTH() { return get_static_field<"MAPINDEX_LENGTH", jint>(); }

	static jni::ref<com::sun::org::apache::xpath::internal::compiler::OpMap> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPatternString() { return call_method<"getPatternString", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::ObjectVector> getTokenQueue() { return call_method<"getTokenQueue", jni::ref<com::sun::org::apache::xml::internal::utils::ObjectVector>>(); }
	jni::ref<java::lang::Object> getToken(jint p1) { return call_method<"getToken", jni::ref<java::lang::Object>>(p1); }
	jint getTokenQueueSize() { return call_method<"getTokenQueueSize", jint>(); }
	jni::ref<com::sun::org::apache::xpath::internal::compiler::OpMapVector> getOpMap() { return call_method<"getOpMap", jni::ref<com::sun::org::apache::xpath::internal::compiler::OpMapVector>>(); }
	jint getOp(jint p1) { return call_method<"getOp", jint>(p1); }
	void setOp(jint p1, jint p2) { return call_method<"setOp", void>(p1, p2); }
	jint getNextOpPos(jint p1) { return call_method<"getNextOpPos", jint>(p1); }
	jint getNextStepPos(jint p1) { return call_method<"getNextStepPos", jint>(p1); }
	static jint getNextOpPos(jni::ref<jni::array<jint>> p1, jint p2) { return call_static_method<"getNextOpPos", jint>(p1, p2); }
	jint getFirstPredicateOpPos(jint p1) { return call_method<"getFirstPredicateOpPos", jint>(p1); }
	void error(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"error", void>(p1, p2); }
	static jint getFirstChildPos(jint p1) { return call_static_method<"getFirstChildPos", jint>(p1); }
	jint getArgLength(jint p1) { return call_method<"getArgLength", jint>(p1); }
	jint getArgLengthOfStep(jint p1) { return call_method<"getArgLengthOfStep", jint>(p1); }
	static jint getFirstChildPosOfStep(jint p1) { return call_static_method<"getFirstChildPosOfStep", jint>(p1); }
	jint getStepTestType(jint p1) { return call_method<"getStepTestType", jint>(p1); }
	jni::ref<java::lang::String> getStepNS(jint p1) { return call_method<"getStepNS", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getStepLocalName(jint p1) { return call_method<"getStepLocalName", jni::ref<java::lang::String>>(p1); }

protected:

	OpMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAP
