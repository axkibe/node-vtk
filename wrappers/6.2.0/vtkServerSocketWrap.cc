/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSocketWrap.h"
#include "vtkServerSocketWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkServerSocketWrap::ptpl;

VtkServerSocketWrap::VtkServerSocketWrap()
{ }

VtkServerSocketWrap::VtkServerSocketWrap(vtkSmartPointer<vtkServerSocket> _native)
{ native = _native; }

VtkServerSocketWrap::~VtkServerSocketWrap()
{ }

void VtkServerSocketWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkServerSocket").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ServerSocket").ToLocalChecked(), ConstructorGetter);
}

void VtkServerSocketWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkServerSocketWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSocketWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSocketWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkServerSocketWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateServer", CreateServer);
	Nan::SetPrototypeMethod(tpl, "createServer", CreateServer);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetServerPort", GetServerPort);
	Nan::SetPrototypeMethod(tpl, "getServerPort", GetServerPort);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkServerSocketWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkServerSocket> native = vtkSmartPointer<vtkServerSocket>::New();
		VtkServerSocketWrap* obj = new VtkServerSocketWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkServerSocketWrap::CreateServer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateServer(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkServerSocketWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkServerSocketWrap::GetServerPort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetServerPort();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkServerSocketWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkServerSocketWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	vtkServerSocket * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkServerSocketWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkServerSocketWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkServerSocketWrap *w = new VtkServerSocketWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkServerSocketWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkServerSocketWrap *wrapper = ObjectWrap::Unwrap<VtkServerSocketWrap>(info.Holder());
	vtkServerSocket *native = (vtkServerSocket *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkServerSocket * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkServerSocketWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkServerSocketWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkServerSocketWrap *w = new VtkServerSocketWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
