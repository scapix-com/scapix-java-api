// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/ObjectAdapterIdBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class ObjectAdapterIdArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::ObjectAdapterIdArray>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/ObjectAdapterIdArray";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::ObjectAdapterIdBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::ObjectAdapterIdArray : public jni::object_base<"com/sun/corba/se/impl/ior/ObjectAdapterIdArray",
	com::sun::corba::se::impl::ior::ObjectAdapterIdBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::ObjectAdapterIdArray> new_object(jni::ref<jni::array<java::lang::String>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::ior::ObjectAdapterIdArray> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jint getNumLevels() { return call_method<"getNumLevels", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::String>> getAdapterName() { return call_method<"getAdapterName", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	ObjectAdapterIdArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTADAPTERIDARRAY