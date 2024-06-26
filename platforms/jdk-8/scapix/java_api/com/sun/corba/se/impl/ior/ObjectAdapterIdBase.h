// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectAdapterId.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class ObjectAdapterIdBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::ObjectAdapterIdBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/ObjectAdapterIdBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::ObjectAdapterId>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::ior::ObjectAdapterIdBase : public jni::object_base<"com/sun/corba/se/impl/ior/ObjectAdapterIdBase",
	java::lang::Object,
	com::sun::corba::se::spi::ior::ObjectAdapterId>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"write", void>(p1); }

protected:

	ObjectAdapterIdBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDBASE
