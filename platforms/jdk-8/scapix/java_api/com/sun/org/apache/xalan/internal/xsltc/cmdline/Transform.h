// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::cmdline { class Transform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::cmdline::Transform>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/cmdline/Transform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::cmdline::Transform : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/cmdline/Transform",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::cmdline::Transform> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jboolean p3, jboolean p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::String> getFileName() { return call_method<"getFileName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	void setParameters(jni::ref<java::util::Vector> p1) { return call_method<"setParameters", void>(p1); }
	static void printUsage() { return call_static_method<"printUsage", void>(); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	Transform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_CMDLINE_TRANSFORM
