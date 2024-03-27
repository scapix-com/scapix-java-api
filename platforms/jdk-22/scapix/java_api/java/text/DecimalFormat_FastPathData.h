// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DecimalFormat_FastPathData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DecimalFormat_FastPathData>
{
	static constexpr fixed_string class_name = "java/text/DecimalFormat$FastPathData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA)
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::DecimalFormat_FastPathData : public jni::object_base<"java/text/DecimalFormat$FastPathData",
	java::lang::Object>
{
public:


protected:

	DecimalFormat_FastPathData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FASTPATHDATA