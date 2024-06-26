// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class FocusManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::FocusManager>
{
	static constexpr fixed_string class_name = "java/awt/FocusManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER)
#define SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::FocusManager : public jni::object_base<"java/awt/FocusManager",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	FocusManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FOCUSMANAGER
