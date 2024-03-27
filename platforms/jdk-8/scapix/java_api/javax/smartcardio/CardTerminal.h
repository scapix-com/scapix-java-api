// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL_FWD
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::smartcardio { class CardTerminal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::smartcardio::CardTerminal>
{
	static constexpr fixed_string class_name = "javax/smartcardio/CardTerminal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL)
#define SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/smartcardio/Card.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::smartcardio::CardTerminal : public jni::object_base<"javax/smartcardio/CardTerminal",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::smartcardio::Card> connect(jni::ref<java::lang::String> p1) { return call_method<"connect", jni::ref<javax::smartcardio::Card>>(p1); }
	jboolean isCardPresent() { return call_method<"isCardPresent", jboolean>(); }
	jboolean waitForCardPresent(jlong p1) { return call_method<"waitForCardPresent", jboolean>(p1); }
	jboolean waitForCardAbsent(jlong p1) { return call_method<"waitForCardAbsent", jboolean>(p1); }

protected:

	CardTerminal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SMARTCARDIO_CARDTERMINAL