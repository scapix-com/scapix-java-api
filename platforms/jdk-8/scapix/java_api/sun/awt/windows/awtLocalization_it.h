// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class awtLocalization_it; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::awtLocalization_it>
{
	static constexpr fixed_string class_name = "sun/awt/windows/awtLocalization_it";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::windows::awtLocalization_it : public jni::object_base<"sun/awt/windows/awtLocalization_it",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::awt::windows::awtLocalization_it> new_object() { return base_::new_object(); }

protected:

	awtLocalization_it(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_AWTLOCALIZATION_IT