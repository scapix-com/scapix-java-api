// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/smartcardio/CardException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::smartcardio { class CardNotPresentException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::smartcardio::CardNotPresentException>
{
	static constexpr fixed_string class_name = "javax/smartcardio/CardNotPresentException";
	using base_classes = std::tuple<scapix::java_api::javax::smartcardio::CardException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::smartcardio::CardNotPresentException : public jni::object_base<"javax/smartcardio/CardNotPresentException",
	javax::smartcardio::CardException>
{
public:

	static jni::ref<javax::smartcardio::CardNotPresentException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::smartcardio::CardNotPresentException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<javax::smartcardio::CardNotPresentException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }

protected:

	CardNotPresentException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDNOTPRESENTEXCEPTION
