// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/format/DateTimeFormatterBuilder_PrefixTree.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class DateTimeFormatterBuilder_PrefixTree_CI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::DateTimeFormatterBuilder_PrefixTree_CI>
{
	static constexpr fixed_string class_name = "java/time/format/DateTimeFormatterBuilder$PrefixTree$CI";
	using base_classes = std::tuple<scapix::java_api::java::time::format::DateTimeFormatterBuilder_PrefixTree>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::format::DateTimeFormatterBuilder_PrefixTree_CI : public jni::object_base<"java/time/format/DateTimeFormatterBuilder$PrefixTree$CI",
	java::time::format::DateTimeFormatterBuilder_PrefixTree>
{
public:


protected:

	DateTimeFormatterBuilder_PrefixTree_CI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER_PREFIXTREE_CI