// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::rmi::CORBA { class StubDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::rmi::CORBA::StubDelegate>
{
	static constexpr fixed_string class_name = "javax/rmi/CORBA/StubDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE)
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInputStream.h>
#include <scapix/java_api/java/io/ObjectOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/rmi/CORBA/Stub.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::rmi::CORBA::StubDelegate : public jni::object_base<"javax/rmi/CORBA/StubDelegate",
	java::lang::Object>
{
public:

	jint hashCode(jni::ref<javax::rmi::CORBA::Stub> p1) { return call_method<"hashCode", jint>(p1); }
	jboolean equals(jni::ref<javax::rmi::CORBA::Stub> p1, jni::ref<java::lang::Object> p2) { return call_method<"equals", jboolean>(p1, p2); }
	jni::ref<java::lang::String> toString(jni::ref<javax::rmi::CORBA::Stub> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }
	void connect(jni::ref<javax::rmi::CORBA::Stub> p1, jni::ref<org::omg::CORBA::ORB> p2) { return call_method<"connect", void>(p1, p2); }
	void readObject(jni::ref<javax::rmi::CORBA::Stub> p1, jni::ref<java::io::ObjectInputStream> p2) { return call_method<"readObject", void>(p1, p2); }
	void writeObject(jni::ref<javax::rmi::CORBA::Stub> p1, jni::ref<java::io::ObjectOutputStream> p2) { return call_method<"writeObject", void>(p1, p2); }

protected:

	StubDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUBDELEGATE