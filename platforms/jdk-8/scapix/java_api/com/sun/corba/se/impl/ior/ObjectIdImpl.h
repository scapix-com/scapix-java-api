// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class ObjectIdImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::ObjectIdImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/ObjectIdImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::ObjectId>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::ObjectIdImpl : public jni::object_base<"com/sun/corba/se/impl/ior/ObjectIdImpl",
	java::lang::Object,
	com::sun::corba::se::spi::ior::ObjectId>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<com::sun::corba::se::impl::ior::ObjectIdImpl> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> getId() { return call_method<"getId", jni::ref<jni::array<jbyte>>>(); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"write", void>(p1); }

protected:

	ObjectIdImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTIDIMPL
