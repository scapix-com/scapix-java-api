// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/util/FormatConcatItem.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class FormatItem_FormatItemOctal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::FormatItem_FormatItemOctal>
{
	static constexpr fixed_string class_name = "java/util/FormatItem$FormatItemOctal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::util::FormatConcatItem>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::FormatItem_FormatItemOctal : public jni::object_base<"java/util/FormatItem$FormatItemOctal",
	java::lang::Object,
	jdk::internal::util::FormatConcatItem>
{
public:

	jlong mix(jlong lengthCoder) { return call_method<"mix", jlong>(lengthCoder); }
	jlong prepend(jlong lengthCoder, jni::ref<jni::array<jbyte>> p2) { return call_method<"prepend", jlong>(lengthCoder, p2); }

protected:

	FormatItem_FormatItemOctal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATITEM_FORMATITEMOCTAL
