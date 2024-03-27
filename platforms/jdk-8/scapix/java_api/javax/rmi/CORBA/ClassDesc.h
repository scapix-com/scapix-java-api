// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC_FWD
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::rmi::CORBA { class ClassDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::rmi::CORBA::ClassDesc>
{
	static constexpr fixed_string class_name = "javax/rmi/CORBA/ClassDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC)
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::rmi::CORBA::ClassDesc : public jni::object_base<"javax/rmi/CORBA/ClassDesc",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::rmi::CORBA::ClassDesc> new_object() { return base_::new_object(); }

protected:

	ClassDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_CLASSDESC
