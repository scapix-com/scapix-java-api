// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_FWD
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::swing::internal::plaf::basic::resources { class basic; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::swing::internal::plaf::basic::resources::basic>
{
	static constexpr fixed_string class_name = "com/sun/swing/internal/plaf/basic/resources/basic";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC)
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::swing::internal::plaf::basic::resources::basic : public jni::object_base<"com/sun/swing/internal/plaf/basic/resources/basic",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::swing::internal::plaf::basic::resources::basic> new_object() { return base_::new_object(); }

protected:

	basic(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC
