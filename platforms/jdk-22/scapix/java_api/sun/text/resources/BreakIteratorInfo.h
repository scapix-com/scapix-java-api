// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::resources { class BreakIteratorInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::resources::BreakIteratorInfo>
{
	static constexpr fixed_string class_name = "sun/text/resources/BreakIteratorInfo";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO)
#define SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::resources::BreakIteratorInfo : public jni::object_base<"sun/text/resources/BreakIteratorInfo",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::text::resources::BreakIteratorInfo> new_object() { return base_::new_object(); }

protected:

	BreakIteratorInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_BREAKITERATORINFO