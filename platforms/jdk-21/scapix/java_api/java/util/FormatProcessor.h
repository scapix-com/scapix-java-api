// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/StringTemplate_Processor.h>
#include <scapix/java_api/java/lang/StringTemplate_Processor_Linkage.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class FormatProcessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::FormatProcessor>
{
	static constexpr fixed_string class_name = "java/util/FormatProcessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::StringTemplate_Processor, scapix::java_api::java::lang::StringTemplate_Processor_Linkage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringTemplate.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::FormatProcessor : public jni::object_base<"java/util/FormatProcessor",
	java::lang::Object,
	java::lang::StringTemplate_Processor,
	java::lang::StringTemplate_Processor_Linkage>
{
public:

	static jni::ref<java::util::FormatProcessor> FMT() { return get_static_field<"FMT", jni::ref<java::util::FormatProcessor>>(); }

	static jni::ref<java::util::FormatProcessor> create(jni::ref<java::util::Locale> locale) { return call_static_method<"create", jni::ref<java::util::FormatProcessor>>(locale); }
	jni::ref<java::lang::String> process(jni::ref<java::lang::StringTemplate> stringTemplate) { return call_method<"process", jni::ref<java::lang::String>>(stringTemplate); }
	jni::ref<java::lang::invoke::MethodHandle> linkage(jni::ref<java::util::List> fragments, jni::ref<java::lang::invoke::MethodType> type) { return call_method<"linkage", jni::ref<java::lang::invoke::MethodHandle>>(fragments, type); }

protected:

	FormatProcessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATPROCESSOR
