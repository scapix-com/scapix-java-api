// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class BidiBase_InsertPoints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::BidiBase_InsertPoints>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/BidiBase$InsertPoints";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::text::BidiBase_InsertPoints : public jni::object_base<"jdk/internal/icu/text/BidiBase$InsertPoints",
	java::lang::Object>
{
public:


protected:

	BidiBase_InsertPoints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_BIDIBASE_INSERTPOINTS