// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/im/InputMethodRequests.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::im::spi { class InputMethodContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::im::spi::InputMethodContext>
{
	static constexpr fixed_string class_name = "java/awt/im/spi/InputMethodContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::im::InputMethodRequests>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT)
#define SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Window.h>
#include <scapix/java_api/java/awt/font/TextHitInfo.h>
#include <scapix/java_api/java/awt/im/spi/InputMethod.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/javax/swing/JFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::im::spi::InputMethodContext : public jni::object_base<"java/awt/im/spi/InputMethodContext",
	java::lang::Object,
	java::awt::im::InputMethodRequests>
{
public:

	void dispatchInputMethodEvent(jint p1, jni::ref<java::text::AttributedCharacterIterator> p2, jint p3, jni::ref<java::awt::font::TextHitInfo> p4, jni::ref<java::awt::font::TextHitInfo> p5) { return call_method<"dispatchInputMethodEvent", void>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Window> createInputMethodWindow(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"createInputMethodWindow", jni::ref<java::awt::Window>>(p1, p2); }
	jni::ref<javax::swing::JFrame> createInputMethodJFrame(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"createInputMethodJFrame", jni::ref<javax::swing::JFrame>>(p1, p2); }
	void enableClientWindowNotification(jni::ref<java::awt::im::spi::InputMethod> p1, jboolean p2) { return call_method<"enableClientWindowNotification", void>(p1, p2); }

protected:

	InputMethodContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODCONTEXT
