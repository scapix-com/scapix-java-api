// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Component_AWTTreeLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Component_AWTTreeLock>
{
	static constexpr fixed_string class_name = "java/awt/Component$AWTTreeLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK)
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Component_AWTTreeLock : public jni::object_base<"java/awt/Component$AWTTreeLock",
	java::lang::Object>
{
public:


protected:

	Component_AWTTreeLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENT_AWTTREELOCK