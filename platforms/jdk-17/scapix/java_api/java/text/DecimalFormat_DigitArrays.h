// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DecimalFormat_DigitArrays; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DecimalFormat_DigitArrays>
{
	static constexpr fixed_string class_name = "java/text/DecimalFormat$DigitArrays";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS)
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::DecimalFormat_DigitArrays : public jni::object_base<"java/text/DecimalFormat$DigitArrays",
	java::lang::Object>
{
public:


protected:

	DecimalFormat_DigitArrays(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_DIGITARRAYS
