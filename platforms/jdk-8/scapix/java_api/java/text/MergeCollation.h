// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class MergeCollation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::MergeCollation>
{
	static constexpr fixed_string class_name = "java/text/MergeCollation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION)
#define SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/PatternEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::MergeCollation : public jni::object_base<"java/text/MergeCollation",
	java::lang::Object>
{
public:

	static jni::ref<java::text::MergeCollation> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getPattern() { return call_method<"getPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPattern(jboolean p1) { return call_method<"getPattern", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> emitPattern() { return call_method<"emitPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> emitPattern(jboolean p1) { return call_method<"emitPattern", jni::ref<java::lang::String>>(p1); }
	void setPattern(jni::ref<java::lang::String> p1) { return call_method<"setPattern", void>(p1); }
	void addPattern(jni::ref<java::lang::String> p1) { return call_method<"addPattern", void>(p1); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jni::ref<java::text::PatternEntry> getItemAt(jint p1) { return call_method<"getItemAt", jni::ref<java::text::PatternEntry>>(p1); }

protected:

	MergeCollation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MERGECOLLATION
