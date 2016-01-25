/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkSubGroupWrap.h"
#include "vtkCommunicatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSubGroupWrap::constructor;

VtkSubGroupWrap::VtkSubGroupWrap()
{ }

VtkSubGroupWrap::VtkSubGroupWrap(vtkSmartPointer<vtkSubGroup> _native)
{ native = _native; }

VtkSubGroupWrap::~VtkSubGroupWrap()
{ }

void VtkSubGroupWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkSubGroupWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkSubGroup").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SubGroup").ToLocalChecked(),tpl->GetFunction());
}

void VtkSubGroupWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Barrier", Barrier);
	Nan::SetPrototypeMethod(tpl, "barrier", Barrier);

	Nan::SetPrototypeMethod(tpl, "Broadcast", Broadcast);
	Nan::SetPrototypeMethod(tpl, "broadcast", Broadcast);

	Nan::SetPrototypeMethod(tpl, "Gather", Gather);
	Nan::SetPrototypeMethod(tpl, "gather", Gather);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrintSubGroup", PrintSubGroup);
	Nan::SetPrototypeMethod(tpl, "printSubGroup", PrintSubGroup);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "getLocalRank", getLocalRank);
	Nan::SetPrototypeMethod(tpl, "getLocalRank", getLocalRank);

	Nan::SetPrototypeMethod(tpl, "setGatherPattern", setGatherPattern);
	Nan::SetPrototypeMethod(tpl, "setGatherPattern", setGatherPattern);

}

void VtkSubGroupWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSubGroup> native = vtkSmartPointer<vtkSubGroup>::New();
		VtkSubGroupWrap* obj = new VtkSubGroupWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSubGroupWrap::Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Barrier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSubGroupWrap::Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Broadcast(
					*a0,
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubGroupWrap::Gather(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Gather(
						*a0,
						*a1,
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubGroupWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSubGroupWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsObject())
					{
						VtkCommunicatorWrap *a4 = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->Initialize(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							(vtkCommunicator *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubGroupWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkSubGroupWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	vtkSubGroup * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSubGroupWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSubGroupWrap *w = new VtkSubGroupWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubGroupWrap::PrintSubGroup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrintSubGroup();
}

void VtkSubGroupWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSubGroup * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSubGroupWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSubGroupWrap *w = new VtkSubGroupWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubGroupWrap::getLocalRank(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->getLocalRank(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubGroupWrap::setGatherPattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubGroupWrap *wrapper = ObjectWrap::Unwrap<VtkSubGroupWrap>(info.Holder());
	vtkSubGroup *native = (vtkSubGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->setGatherPattern(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

