// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::datatype { class DurationYearMonthImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationYearMonthImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/datatype/DurationYearMonthImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::datatype::DurationYearMonthImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/datatype/DurationYearMonthImpl",
	com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::datatype::DurationYearMonthImpl> new_object(jboolean p1, jni::ref<java::math::BigInteger> p2, jni::ref<java::math::BigInteger> p3) { return base_::new_object(p1, p2, p3); }
	jint getValue() { return call_method<"getValue", jint>(); }

protected:

	DurationYearMonthImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_DATATYPE_DURATIONYEARMONTHIMPL
