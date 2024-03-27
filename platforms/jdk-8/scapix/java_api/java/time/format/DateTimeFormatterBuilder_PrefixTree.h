// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatterBuilder_PrefixTree; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatterBuilder_PrefixTree>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatterBuilder$PrefixTree";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/time/format/DateTimeParseContext.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatterBuilder_PrefixTree : public jni::object_base<"java/time/format/DateTimeFormatterBuilder$PrefixTree",
	java::lang::Object>
{
public:

	static jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree> newTree(jni::ref<java::time::format::DateTimeParseContext> p1) { return call_static_method<"newTree", jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree>>(p1); }
	static jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree> newTree(jni::ref<java::util::Set> p1, jni::ref<java::time::format::DateTimeParseContext> p2) { return call_static_method<"newTree", jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree>>(p1, p2); }
	jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree> copyTree() { return call_method<"copyTree", jni::ref<java::time::format::DateTimeFormatterBuilder_PrefixTree>>(); }
	jboolean add(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"add", jboolean>(p1, p2); }
	jni::ref<java::lang::String> match(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3) { return call_method<"match", jni::ref<java::lang::String>>(p1, p2, p3); }
	jni::ref<java::lang::String> match(jni::ref<java::lang::CharSequence> p1, jni::ref<java::text::ParsePosition> p2) { return call_method<"match", jni::ref<java::lang::String>>(p1, p2); }

protected:

	DateTimeFormatterBuilder_PrefixTree(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE