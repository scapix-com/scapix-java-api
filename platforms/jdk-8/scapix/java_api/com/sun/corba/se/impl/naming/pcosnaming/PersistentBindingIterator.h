// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/naming/cosnaming/BindingIteratorImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::naming::pcosnaming { class PersistentBindingIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::naming::pcosnaming::PersistentBindingIterator>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/naming/pcosnaming/PersistentBindingIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::naming::cosnaming::BindingIteratorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CosNaming/BindingHolder.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::naming::pcosnaming::PersistentBindingIterator : public jni::object_base<"com/sun/corba/se/impl/naming/pcosnaming/PersistentBindingIterator",
	com::sun::corba::se::impl::naming::cosnaming::BindingIteratorImpl>
{
public:

	static jni::ref<com::sun::corba::se::impl::naming::pcosnaming::PersistentBindingIterator> new_object(jni::ref<org::omg::CORBA::ORB> p1, jni::ref<java::util::Hashtable> p2, jni::ref<org::omg::PortableServer::POA> p3) { return base_::new_object(p1, p2, p3); }
	jboolean NextOne(jni::ref<org::omg::CosNaming::BindingHolder> p1) { return call_method<"NextOne", jboolean>(p1); }
	void Destroy() { return call_method<"Destroy", void>(); }
	jint RemainingElements() { return call_method<"RemainingElements", jint>(); }

protected:

	PersistentBindingIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_PERSISTENTBINDINGITERATOR
