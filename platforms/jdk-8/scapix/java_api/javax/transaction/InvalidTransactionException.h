// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/RemoteException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::transaction { class InvalidTransactionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::transaction::InvalidTransactionException>
{
	static constexpr fixed_string class_name = "javax/transaction/InvalidTransactionException";
	using base_classes = std::tuple<scapix::java_api::java::rmi::RemoteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::transaction::InvalidTransactionException : public jni::object_base<"javax/transaction/InvalidTransactionException",
	java::rmi::RemoteException>
{
public:

	static jni::ref<javax::transaction::InvalidTransactionException> new_object() { return base_::new_object(); }
	static jni::ref<javax::transaction::InvalidTransactionException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidTransactionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TRANSACTION_INVALIDTRANSACTIONEXCEPTION
