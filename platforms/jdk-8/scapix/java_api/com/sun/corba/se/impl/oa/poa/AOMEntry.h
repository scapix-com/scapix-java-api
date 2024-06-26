// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/FSMImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::oa::poa { class AOMEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::oa::poa::AOMEntry>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/oa/poa/AOMEntry";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::FSMImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/oa/poa/POAImpl.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/State.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::oa::poa::AOMEntry : public jni::object_base<"com/sun/corba/se/impl/oa/poa/AOMEntry",
	com::sun::corba::se::spi::orbutil::fsm::FSMImpl>
{
public:

	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> INVALID() { return get_static_field<"INVALID", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> INCARN() { return get_static_field<"INCARN", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> VALID() { return get_static_field<"VALID", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> ETHP() { return get_static_field<"ETHP", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> ETH() { return get_static_field<"ETH", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }
	static jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> DESTROYED() { return get_static_field<"DESTROYED", jni::ref<com::sun::corba::se::spi::orbutil::fsm::State>>(); }

	static jni::ref<com::sun::corba::se::impl::oa::poa::AOMEntry> new_object(jni::ref<com::sun::corba::se::impl::oa::poa::POAImpl> p1) { return base_::new_object(p1); }
	void startEtherealize(jni::ref<java::lang::Thread> p1) { return call_method<"startEtherealize", void>(p1); }
	void etherealizeComplete() { return call_method<"etherealizeComplete", void>(); }
	void incarnateComplete() { return call_method<"incarnateComplete", void>(); }
	void incarnateFailure() { return call_method<"incarnateFailure", void>(); }
	void activateObject() { return call_method<"activateObject", void>(); }
	void enter() { return call_method<"enter", void>(); }
	void exit() { return call_method<"exit", void>(); }

protected:

	AOMEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_AOMENTRY
