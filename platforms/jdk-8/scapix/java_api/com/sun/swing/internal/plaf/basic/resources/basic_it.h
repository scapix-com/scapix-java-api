// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT_FWD
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::swing::internal::plaf::basic::resources { class basic_it; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::swing::internal::plaf::basic::resources::basic_it>
{
	static constexpr fixed_string class_name = "com/sun/swing/internal/plaf/basic/resources/basic_it";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT)
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::swing::internal::plaf::basic::resources::basic_it : public jni::object_base<"com/sun/swing/internal/plaf/basic/resources/basic_it",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::swing::internal::plaf::basic::resources::basic_it> new_object() { return base_::new_object(); }

protected:

	basic_it(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_BASIC_RESOURCES_BASIC_IT