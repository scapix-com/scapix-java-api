// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::im::spi { class InputMethodDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::im::spi::InputMethodDescriptor>
{
	static constexpr fixed_string class_name = "java/awt/im/spi/InputMethodDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR)
#define SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/im/spi/InputMethod.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::im::spi::InputMethodDescriptor : public jni::object_base<"java/awt/im/spi/InputMethodDescriptor",
	java::lang::Object>
{
public:

	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean hasDynamicLocaleList() { return call_method<"hasDynamicLocaleList", jboolean>(); }
	jni::ref<java::lang::String> getInputMethodDisplayName(jni::ref<java::util::Locale> p1, jni::ref<java::util::Locale> p2) { return call_method<"getInputMethodDisplayName", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::awt::Image> getInputMethodIcon(jni::ref<java::util::Locale> p1) { return call_method<"getInputMethodIcon", jni::ref<java::awt::Image>>(p1); }
	jni::ref<java::awt::im::spi::InputMethod> createInputMethod() { return call_method<"createInputMethod", jni::ref<java::awt::im::spi::InputMethod>>(); }

protected:

	InputMethodDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IM_SPI_INPUTMETHODDESCRIPTOR