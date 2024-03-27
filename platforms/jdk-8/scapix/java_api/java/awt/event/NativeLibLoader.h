// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class NativeLibLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::NativeLibLoader>
{
	static constexpr fixed_string class_name = "java/awt/event/NativeLibLoader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::event::NativeLibLoader : public jni::object_base<"java/awt/event/NativeLibLoader",
	java::lang::Object>
{
public:


protected:

	NativeLibLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_NATIVELIBLOADER