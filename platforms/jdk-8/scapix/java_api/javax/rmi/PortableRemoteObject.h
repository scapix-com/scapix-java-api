// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT_FWD
#define SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::rmi { class PortableRemoteObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::rmi::PortableRemoteObject>
{
	static constexpr fixed_string class_name = "javax/rmi/PortableRemoteObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT)
#define SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/rmi/Remote.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::rmi::PortableRemoteObject : public jni::object_base<"javax/rmi/PortableRemoteObject",
	java::lang::Object>
{
public:

	static void exportObject(jni::ref<java::rmi::Remote> p1) { return call_static_method<"exportObject", void>(p1); }
	static jni::ref<java::rmi::Remote> toStub(jni::ref<java::rmi::Remote> p1) { return call_static_method<"toStub", jni::ref<java::rmi::Remote>>(p1); }
	static void unexportObject(jni::ref<java::rmi::Remote> p1) { return call_static_method<"unexportObject", void>(p1); }
	static jni::ref<java::lang::Object> narrow(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"narrow", jni::ref<java::lang::Object>>(p1, p2); }
	static void connect(jni::ref<java::rmi::Remote> p1, jni::ref<java::rmi::Remote> p2) { return call_static_method<"connect", void>(p1, p2); }

protected:

	PortableRemoteObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_PORTABLEREMOTEOBJECT
