// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/text/normalizer/ICUBinary_Authenticate.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class ICUBinary_IsAcceptable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::ICUBinary_IsAcceptable>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/ICUBinary$IsAcceptable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::text::normalizer::ICUBinary_Authenticate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::ICUBinary_IsAcceptable : public jni::object_base<"sun/text/normalizer/ICUBinary$IsAcceptable",
	java::lang::Object,
	sun::text::normalizer::ICUBinary_Authenticate>
{
public:

	jboolean isDataVersionAcceptable(jni::ref<jni::array<jbyte>> version) { return call_method<"isDataVersionAcceptable", jboolean>(version); }

protected:

	ICUBinary_IsAcceptable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_ISACCEPTABLE
