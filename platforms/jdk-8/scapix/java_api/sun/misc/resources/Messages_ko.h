// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO_FWD
#define SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc::resources { class Messages_ko; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::resources::Messages_ko>
{
	static constexpr fixed_string class_name = "sun/misc/resources/Messages_ko";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO)
#define SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::resources::Messages_ko : public jni::object_base<"sun/misc/resources/Messages_ko",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::misc::resources::Messages_ko> new_object() { return base_::new_object(); }

protected:

	Messages_ko(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_RESOURCES_MESSAGES_KO
