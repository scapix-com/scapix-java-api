// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/dynamicany/DynAnyCollectionImpl.h>
#include <scapix/java_api/org/omg/DynamicAny/DynSequence.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::dynamicany { class DynSequenceImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynSequenceImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/dynamicany/DynSequenceImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl, scapix::java_api::org::omg::DynamicAny::DynSequence>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::dynamicany::DynSequenceImpl : public jni::object_base<"com/sun/corba/se/impl/dynamicany/DynSequenceImpl",
	com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl,
	org::omg::DynamicAny::DynSequence>
{
public:

	jint get_length() { return call_method<"get_length", jint>(); }
	void set_length(jint p1) { return call_method<"set_length", void>(p1); }

protected:

	DynSequenceImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNSEQUENCEIMPL
