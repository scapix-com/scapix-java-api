// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/print/Pageable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::print { class Book; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::print::Book>
{
	static constexpr fixed_string class_name = "java/awt/print/Book";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::print::Pageable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK)
#define SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/print/PageFormat.h>
#include <scapix/java_api/java/awt/print/Printable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::print::Book : public jni::object_base<"java/awt/print/Book",
	java::lang::Object,
	java::awt::print::Pageable>
{
public:

	static jni::ref<java::awt::print::Book> new_object() { return base_::new_object(); }
	jint getNumberOfPages() { return call_method<"getNumberOfPages", jint>(); }
	jni::ref<java::awt::print::PageFormat> getPageFormat(jint p1) { return call_method<"getPageFormat", jni::ref<java::awt::print::PageFormat>>(p1); }
	jni::ref<java::awt::print::Printable> getPrintable(jint p1) { return call_method<"getPrintable", jni::ref<java::awt::print::Printable>>(p1); }
	void setPage(jint p1, jni::ref<java::awt::print::Printable> p2, jni::ref<java::awt::print::PageFormat> p3) { return call_method<"setPage", void>(p1, p2, p3); }
	void append(jni::ref<java::awt::print::Printable> p1, jni::ref<java::awt::print::PageFormat> p2) { return call_method<"append", void>(p1, p2); }
	void append(jni::ref<java::awt::print::Printable> p1, jni::ref<java::awt::print::PageFormat> p2, jint p3) { return call_method<"append", void>(p1, p2, p3); }

protected:

	Book(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINT_BOOK
