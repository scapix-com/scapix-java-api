// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTAccessor_ToolkitAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTAccessor_ToolkitAccessor>
{
	static constexpr fixed_string class_name = "sun/awt/AWTAccessor$ToolkitAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR)
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/ResourceBundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTAccessor_ToolkitAccessor : public jni::object_base<"sun/awt/AWTAccessor$ToolkitAccessor",
	java::lang::Object>
{
public:

	void setPlatformResources(jni::ref<java::util::ResourceBundle> p1) { return call_method<"setPlatformResources", void>(p1); }

protected:

	AWTAccessor_ToolkitAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_TOOLKITACCESSOR
